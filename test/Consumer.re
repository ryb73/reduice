open Promise;

let p = Dependent.go("yes")
    |> then_((v) => {
        Js.log2("success?", v);
        resolve();
    });

Js.log2("p =", p);