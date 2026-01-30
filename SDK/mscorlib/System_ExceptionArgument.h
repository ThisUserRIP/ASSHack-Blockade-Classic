#pragma once
namespace mscorlib::System
{
	enum struct ExceptionArgument : int32_t
	{
		obj = static_cast<int32_t>(0x0),
		dictionary = static_cast<int32_t>(0x1),
		dictionaryCreationThreshold = static_cast<int32_t>(0x2),
		array = static_cast<int32_t>(0x3),
		info = static_cast<int32_t>(0x4),
		key = static_cast<int32_t>(0x5),
		collection = static_cast<int32_t>(0x6),
		list = static_cast<int32_t>(0x7),
		match = static_cast<int32_t>(0x8),
		converter = static_cast<int32_t>(0x9),
		queue = static_cast<int32_t>(0xA),
		stack = static_cast<int32_t>(0xB),
		capacity = static_cast<int32_t>(0xC),
		index = static_cast<int32_t>(0xD),
		startIndex = static_cast<int32_t>(0xE),
		value = static_cast<int32_t>(0xF),
		count = static_cast<int32_t>(0x10),
		arrayIndex = static_cast<int32_t>(0x11),
		name = static_cast<int32_t>(0x12),
		mode = static_cast<int32_t>(0x13),
		item = static_cast<int32_t>(0x14),
		options = static_cast<int32_t>(0x15),
		view = static_cast<int32_t>(0x16),
		sourceBytesToCopy = static_cast<int32_t>(0x17),
		start = static_cast<int32_t>(0x18),
		pointer = static_cast<int32_t>(0x19),
		ownedMemory = static_cast<int32_t>(0x1A),
		text = static_cast<int32_t>(0x1B),
	};
}

