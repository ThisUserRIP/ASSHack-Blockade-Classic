#pragma once
namespace mscorlib::System::IO
{
	enum struct MonoIOError : int32_t
	{
		ERROR_SUCCESS_ = static_cast<int32_t>(0x0),
		ERROR_FILE_NOT_FOUND_ = static_cast<int32_t>(0x2),
		ERROR_PATH_NOT_FOUND_ = static_cast<int32_t>(0x3),
		ERROR_TOO_MANY_OPEN_FILES_ = static_cast<int32_t>(0x4),
		ERROR_ACCESS_DENIED_ = static_cast<int32_t>(0x5),
		ERROR_INVALID_HANDLE_ = static_cast<int32_t>(0x6),
		ERROR_INVALID_DRIVE_ = static_cast<int32_t>(0xF),
		ERROR_NOT_SAME_DEVICE_ = static_cast<int32_t>(0x11),
		ERROR_NO_MORE_FILES_ = static_cast<int32_t>(0x12),
		ERROR_NOT_READY_ = static_cast<int32_t>(0x15),
		ERROR_WRITE_FAULT_ = static_cast<int32_t>(0x1D),
		ERROR_READ_FAULT_ = static_cast<int32_t>(0x1E),
		ERROR_GEN_FAILURE_ = static_cast<int32_t>(0x1F),
		ERROR_SHARING_VIOLATION_ = static_cast<int32_t>(0x20),
		ERROR_LOCK_VIOLATION_ = static_cast<int32_t>(0x21),
		ERROR_HANDLE_DISK_FULL_ = static_cast<int32_t>(0x27),
		ERROR_FILE_EXISTS_ = static_cast<int32_t>(0x50),
		ERROR_CANNOT_MAKE_ = static_cast<int32_t>(0x52),
		ERROR_INVALID_PARAMETER_ = static_cast<int32_t>(0x57),
		ERROR_BROKEN_PIPE_ = static_cast<int32_t>(0x6D),
		ERROR_INVALID_NAME_ = static_cast<int32_t>(0x7B),
		ERROR_DIR_NOT_EMPTY_ = static_cast<int32_t>(0x91),
		ERROR_ALREADY_EXISTS_ = static_cast<int32_t>(0xB7),
		ERROR_FILENAME_EXCED_RANGE_ = static_cast<int32_t>(0xCE),
		ERROR_DIRECTORY_ = static_cast<int32_t>(0x10B),
		ERROR_ENCRYPTION_FAILED_ = static_cast<int32_t>(0x1770),
	};
}

