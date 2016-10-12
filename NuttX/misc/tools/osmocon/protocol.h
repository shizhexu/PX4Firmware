
enum loader_command {
	/* init message from loader */
	LOADER_INIT,

	/* ping / pong */
	LOADER_PING,

	/* lifecycle requests */
	LOADER_RESET,
	LOADER_POWEROFF,

	/* jumps */
	LOADER_JUMP,
	LOADER_ENTER_ROM_LOADER,
	LOADER_ENTER_FLASH_LOADER,

	/* generic memory ops */
	LOADER_MEM_READ,
	LOADER_MEM_WRITE,

	/* flash operations */
	LOADER_FLASH_INFO,
	LOADER_FLASH_ERASE,
	LOADER_FLASH_UNLOCK,
	LOADER_FLASH_LOCK,
	LOADER_FLASH_LOCKDOWN,
	LOADER_FLASH_GETLOCK,
	LOADER_FLASH_PROGRAM,

};

enum loader_flash_lock {
	LOADER_FLASH_UNLOCKED = 0,
	LOADER_FLASH_LOCKED,
	LOADER_FLASH_LOCKED_DOWN,
};
