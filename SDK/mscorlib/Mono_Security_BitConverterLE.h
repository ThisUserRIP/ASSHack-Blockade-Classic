#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Security
{
	struct BitConverterLE : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static IL2CPP::Array<uint8_t>* GetUIntBytes(uint8_t* bytes);
		static IL2CPP::Array<uint8_t>* GetULongBytes(uint8_t* bytes);
		static IL2CPP::Array<uint8_t>* GetBytes(int32_t value);
		static IL2CPP::Array<uint8_t>* GetBytes(float value);
		static IL2CPP::Array<uint8_t>* GetBytes(double value);
		static void UIntFromBytes(uint8_t* dst, IL2CPP::Array<uint8_t>* src, int32_t startIndex);
		static void ULongFromBytes(uint8_t* dst, IL2CPP::Array<uint8_t>* src, int32_t startIndex);
		static float ToSingle(IL2CPP::Array<uint8_t>* value, int32_t startIndex);
		static double ToDouble(IL2CPP::Array<uint8_t>* value, int32_t startIndex);
	};
}

