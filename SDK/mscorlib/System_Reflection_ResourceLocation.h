#pragma once
namespace mscorlib::System::Reflection
{
	enum struct ResourceLocation : int32_t
	{
		Embedded = static_cast<int32_t>(0x1),
		ContainedInAnotherAssembly = static_cast<int32_t>(0x2),
		ContainedInManifestFile = static_cast<int32_t>(0x4),
	};
}

