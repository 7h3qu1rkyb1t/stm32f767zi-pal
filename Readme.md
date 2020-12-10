## PAL
Peripheral Access Library (PAL) is generated from svd file. it only provides registers structers and macros to set individual bits of registers. 
Although it may contain some library functions to make things easy **Its not a HAL**. you can completely discard those and use only baremetal registers

### Creating a new project

- `cd projects`
- `make new PROJECT="<project name>"` by default it will create project in name of new

**NOTE** : it was never meant to be library, i created this for making my projects easy. if anyone want to use it then just remove all projects froms projects folder and you can reuse them
