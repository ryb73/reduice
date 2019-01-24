let promise : ref(option(module ReduiceTypes.Promise)) = ref(None);

let registerPromise = (p) =>
    switch (promise^) {
        | None => promise := Some(p);
        | _ => failwith("Promise module already registered")
    };

let getPromise = () =>
    switch(promise^) {
        | Some(p) => p
        | None => (module DefaultPromise)
    };
