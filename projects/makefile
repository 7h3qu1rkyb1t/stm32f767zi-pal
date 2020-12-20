.PHONY: new

PROJECT?=new
new:
	@mkdir -p $(PROJECT)/{include,src,target}
	@cp ../templates/project.mk $(PROJECT)/makefile
	@cp ../templates/openocd.{cfg,gdb} $(PROJECT)/
	@touch $(PROJECT)/src/main.c


