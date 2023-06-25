function node_with_immediate(name, node, alias_name = null) {
  ret = {};
  if (alias_name) {
    (ret[name] = ($) => alias(node, $[alias_name])),
      (ret["_immediate_" + name] = ($) =>
        alias(token.immediate(node), $[alias_name]));
  } else {
    (ret[name] = (_$) => node),
      (ret["_immediate_" + name] = ($) =>
        alias(token.immediate(node), $[name]));
  }

  return ret;
}

function immediate($, name) {
  return $["_immediate_" + name];
}

function arglist(...args) {
  return seq(args.at(0), ...args.slice(1).flatMap((arg) => [",", arg]));
}

function sep1(rep, separator) {
  return seq(rep, repeat(seq(separator, rep)))
}

function optional_specifier(name, pat) {
  return _specifier(name, pat, false);
}

function specifier(name, pat) {
  return _specifier(name, pat, true);
}

function _specifier(name, pat, required) {
  if (required) {
    return seq(name, token.immediate(":"), pat);
  }
  return seq(name, optional(seq(token.immediate(":"), pat)));
}

function repeatn(rule, n) {
  return seq(...Array(n).fill(rule));
}

module.exports = {
  node_with_immediate,
  immediate,
  arglist,
  sep1,
  repeatn,
  specifier,
  optional_specifier,
};
