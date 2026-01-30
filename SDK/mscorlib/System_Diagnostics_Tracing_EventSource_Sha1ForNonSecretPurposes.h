#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Diagnostics_Tracing_EventSource.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventSource_Sha1ForNonSecretPurposes
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t length;
		IL2CPP::Array<uint32_t>* w;
		int32_t pos;
		void Start();
		void Append(uint8_t input);
		void Append(IL2CPP::Array<uint8_t>* input);
		void Finish(IL2CPP::Array<uint8_t>* output);
		void Drain();
		static uint32_t Rol1(uint32_t input);
		static uint32_t Rol5(uint32_t input);
		static uint32_t Rol30(uint32_t input);
	};
}

