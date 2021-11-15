# Makefile

TAG = v2.3.6
UE_TAG = v3.2.4

OPEN5GS_IMAGE = open5gs
OPEN5GS_DOCKER_DIR = open5gs
OPEN5GS_WEBUI_IMAGE = open5gs-webui
OPEN5GS_WEBUI_DOCKER_DIR = open5gs-webui

UERANSIM_IMAGE = ueransim
UERANSIM_DOCKER_DIR = UERANSIM

.PHONY:help
help: #c Show this help message.
	@ echo 'Common make targets :'
	@ echo -e '  \e[4mTag Version\e[24m'
	@ echo -e '    \e[36mOpen5GS\e[0m  : \e[31m$(TAG)\e[0m'
	@ echo -e '    \e[36mUERANSIM\e[0m : \e[31m$(UE_TAG)\e[0m'
	@ echo ''
	@ echo -e '  Usage:'
	@ echo '    make <target> [flags...]'
	@ echo ''
	@ echo '  Command:'
	@ @awk 'BEGIN {FS = ":.*?#c "} /^[a-zA-Z0-9_-]+:.*?#c / {printf "    \033[33m%-34s\033[0m %s\n", $$1, $$2}' $(MAKEFILE_LIST)
	@ echo ''
	@ echo '    Build:'
	@ @awk 'BEGIN {FS = ":.*?#b "} /^[a-zA-Z0-9_-]+:.*?#b / {printf "      %-32s %s\n", $$1, $$2}' $(MAKEFILE_LIST)
	@ echo ''
	@ echo '    Clean:'
	@ @awk 'BEGIN {FS = ":.*?#r "} /^[a-zA-Z0-9_-]+:.*?#r / {printf "      %-32s %s\n", $$1, $$2}' $(MAKEFILE_LIST)
	@ echo ''
	@ echo '  Flags:'
	@ @awk '/^#/{ comment = substr($$0,3) } comment && /^[a-zA-Z][a-zA-Z0-9_-]+ ?\?=/{print "   ", $$1, $$2, "",comment}' $(MAKEFILE_LIST) | column -t -s '?=' | sort
	@ echo ''

build: build-core build-webui #b Build All Images.
clean: clean-core clean-webui #r Remove All Images.

build-core: #b Build Core Image.
	docker build -t ${OPEN5GS_IMAGE}:${TAG} --build-arg VERSION=${TAG} ${OPEN5GS_DOCKER_DIR}
clean-core: #r Remove Core Image.
	docker rmi ${OPEN5GS_IMAGE}:${TAG}

build-webui: #b Build WebUI Image.
	docker build -t ${OPEN5GS_WEBUI_IMAGE}:${TAG} --build-arg VERSION=${TAG} ${OPEN5GS_WEBUI_DOCKER_DIR}
clean-webui: #r Remove WebUI Image.
	docker rmi ${OPEN5GS_WEBUI_IMAGE}:${TAG}

build-ueransim: #b Build UERANSIM Images.
	docker build -t ${UERANSIM_IMAGE}:${UE_TAG} --build-arg VERSION=${TAG} ${UERANSIM_DOCKER_DIR}
clean-ueransim: #r Remove UERANSIM Image.
	docker rmi ${UERANSIM_IMAGE}:${UE_TAG}
