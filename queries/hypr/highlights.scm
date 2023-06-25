(ERROR) @error
(comment) @comment
[
 ","
] @punctuation.delimiter
[
 "("
 ")"
 "}"
 "{"
] @punctuation.braket

[(int) (hex)] @number
(float) @float
(bool) @boolean
[
 (word)
 (str)
] @string

(command (_ name: _ @keyword))

(dispatcher name: _ @function.builtin)

(color (_ ["rgb" "rgba"] @function))

