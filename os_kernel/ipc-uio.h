/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright 2019,2023-2024 NXP
 */
#ifndef IPC_UIO_H
#define IPC_UIO_H

/* UIO command */
/* disable Rx inter-core interrupt */
#define IPC_UIO_DISABLE_CMD		(0x0001)

/* enable Rx inter-core interrupt */
#define IPC_UIO_ENABLE_CMD		(0x0002)

/* trigger Tx inter-core interrupt */
#define IPC_UIO_TRIGGER_CMD		(0x0003)

#define IPC_UIO_INIT			(0xF1)
#define IPC_UIO_FREE			(0xF2)

/**
 * struct ipc_uio_cdev_data - store data about init/free
 *                            that write to kernel space
 * @cmd:      command send to char driver to initialize or free instance
 * @instance: target instance
 * @cfg:      instance's configuration
 */
struct ipc_uio_cdev_data {
	uint8_t cmd;
	uint8_t instance;
	struct ipc_shm_cfg cfg;
};

#endif /* IPC_UIO_H */
