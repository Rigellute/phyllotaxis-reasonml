Phyllotaxis in Reprocessing
---
![out](https://user-images.githubusercontent.com/12150276/38447613-4dfb3d96-39f6-11e8-920b-045498701ff5.gif)
## How to

### Clone
```
git clone git@github.com:Rigellute/phyllotaxis-reasonml.git
```

### Install
```
yarn
```

### Build
```
yarn build
```

### Start
```
yarn start
```

To build to JS run `npm run build:web` and then run a static server, like `python -m SimpleHTTPServer` and go to `localhost:8000`. If you're using safari you can simply open the `index.html` and tick `Develop > Disable Cross-Origin Restrictions`.

To build to native run `npm run build:native` and run `npm run start:native`

The build system used is [bsb-native](https://github.com/bsansouci/bsb-native).
