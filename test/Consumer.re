open Promise;

let p = Promise.resolve("yayaa")
    |> toJs
    |> fromJs
    |> then_((v) => {
        Js.log2("success?", v);
        resolve();
    });

Js.log2("p =", p);