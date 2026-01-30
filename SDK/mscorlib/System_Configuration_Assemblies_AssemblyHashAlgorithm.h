#pragma once
namespace mscorlib::System::Configuration::Assemblies
{
	enum struct AssemblyHashAlgorithm : int32_t
	{
		None = static_cast<int32_t>(0x0),
		MD5 = static_cast<int32_t>(0x8003),
		SHA1 = static_cast<int32_t>(0x8004),
		SHA256 = static_cast<int32_t>(0x800C),
		SHA384 = static_cast<int32_t>(0x800D),
		SHA512 = static_cast<int32_t>(0x800E),
	};
}

