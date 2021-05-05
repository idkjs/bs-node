# bs-node

# bs-node

~~This is a repo pulled out from BuckleScript's [Node API](https://bucklescript.github.io/bucklescript/api/Node.html) so that it can be iterated on independently, in userland. It currently isn't stable! We'll gradually upstream the stable parts back into BuckleScript.~~

~~Note: This repo is not actively maintained, and seems unlikely to be upstreamed into bucklescript proper. It appears that the community has largely settled on creating bindings for individual Node APIs, rather than utilizing a large, monolithic set of bindings.~~

# updated version of above to use while updated old reasonml code, like [reason-http-experiments/tree/28f86b671177d8c9fe5df43537c2a02403ec39c2)](https://github.com/MeridianPartners/reason-http-experiments/tree/28f86b671177d8c9fe5df43537c2a02403ec39c2)
## Installation

```sh
npm install --save idkjs/bs-node
```

Then add `bs-node` to `bs-dependencies` in your `bsconfig.json`:
```js
{
  ...
  "bs-dependencies": ["bs-node"]
}
```
