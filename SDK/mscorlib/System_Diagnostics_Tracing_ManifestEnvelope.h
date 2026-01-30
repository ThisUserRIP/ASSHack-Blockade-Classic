#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Diagnostics_Tracing_ManifestEnvelope_ManifestFormats.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct ManifestEnvelope
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::Tracing::ManifestEnvelope_ManifestFormats Format;
		uint8_t MajorVersion;
		uint8_t MinorVersion;
		uint8_t Magic;
		uint16_t TotalChunks;
		uint16_t ChunkNumber;
	};
}

