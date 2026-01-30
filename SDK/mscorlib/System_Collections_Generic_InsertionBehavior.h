#pragma once
namespace mscorlib::System::Collections::Generic
{
	enum struct InsertionBehavior : uint8_t
	{
		None = static_cast<uint8_t>(0x0),
		OverwriteExisting = static_cast<uint8_t>(0x1),
		ThrowOnExisting = static_cast<uint8_t>(0x2),
	};
}

