#pragma once

#include <linux/usb.h>

struct usb_skel {
	struct usb_device* udev;
	struct usb_interface* ip;
    struct usb_anchor submitted;
	struct kref kref;

    struct usb_endpoint_descriptor* int_in_endpoint;
    unsigned char* int_in_buffer;
    int int_in_buffer_length;
    struct urb* int_in_urb;
    dma_addr_t* int_in_dma;

    struct usb_endpoint_descriptor* int_out_endpoint;

} ;