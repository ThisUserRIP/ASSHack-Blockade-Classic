#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Rewired_Core::Rewired::Utils
{
	struct NativeTools : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* yKwJzWRuBRaiVOArIWSgQOrNUrY;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static intptr_t OffsetIntPtr(intptr_t intPtr, int32_t offset);
		static bool CopyMemory(intptr_t source, intptr_t destination, int32_t sourceStartIndex, int32_t destinationStartIndex, int32_t bytesToCopy, bool throwOnError);
		static bool CopyMemory(IL2CPP::Array<uint8_t>* source, intptr_t destination, int32_t sourceStartIndex, int32_t destinationStartIndex, int32_t bytesToCopy, bool throwOnError);
		static bool CopyMemory(intptr_t source, IL2CPP::Array<uint8_t>* destination, int32_t sourceStartIndex, int32_t destinationStartIndex, int32_t bytesToCopy, bool throwOnError);
		static bool FillMemory(intptr_t buffer, int32_t length, uint8_t value, bool throwOnError);
		static bool FillMemory(intptr_t buffer, int32_t startIndex, int32_t length, uint8_t value, bool throwOnError);
		static bool FillMemory(IL2CPP::Array<uint8_t>* buffer, int32_t length, uint8_t value, bool throwOnError);
		static bool FillMemory(IL2CPP::Array<uint8_t>* buffer, int32_t startIndex, int32_t length, uint8_t value, bool throwOnError);
		static void ZeroFillMemory(intptr_t buffer, int32_t length);
		static mscorlib::System::String* DumpToString(intptr_t buffer, int32_t length, mscorlib::System::String* stringFormat);
		static void FreeHGlobalSafe(intptr_t& pointer);
	};
}

