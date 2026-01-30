#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkHash128
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t i0;
		uint8_t i1;
		uint8_t i2;
		uint8_t i3;
		uint8_t i4;
		uint8_t i5;
		uint8_t i6;
		uint8_t i7;
		uint8_t i8;
		uint8_t i9;
		uint8_t i10;
		uint8_t i11;
		uint8_t i12;
		uint8_t i13;
		uint8_t i14;
		uint8_t i15;
		void Reset();
		bool IsValid();
		static int32_t HexToNumber(wchar_t c);
		static com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 Parse(mscorlib::System::String* text);
		mscorlib::System::String* ToString();
	};
}

