let left_pad = (word: string, num: int, pad_char: string) => {
    switch(String.length(word) < num) {
    | true =>
        let number_to_fill = num - String.length(word);
        let padding = String.make(number_to_fill, pad_char.[0]);
        padding ++ word;
    | false => word
    }
};

let run = () => {
    let [ _cmd_name, ...args ] = Sys.argv |> Array.to_list;

    switch(args) {
    | [word, num] =>
        print_endline(left_pad(word, int_of_string(num), " "));
    | [ word, num, pad_char ] =>
        print_endline(left_pad(word, int_of_string(num), pad_char));
    | _ =>
        print_endline("Invalid arguments");
    }
};

run();