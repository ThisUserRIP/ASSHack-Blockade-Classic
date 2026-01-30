#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Text { struct Encoding; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UnityWebRequestModule::UnityEngine
{
	struct WWWTranscoder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* ucHexChars;
			IL2CPP::Array<uint8_t>* lcHexChars;
			uint8_t urlEscapeChar;
			IL2CPP::Array<uint8_t>* urlSpace;
			IL2CPP::Array<uint8_t>* dataSpace;
			IL2CPP::Array<uint8_t>* urlForbidden;
			uint8_t qpEscapeChar;
			IL2CPP::Array<uint8_t>* qpSpace;
			IL2CPP::Array<uint8_t>* qpForbidden;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static uint8_t Hex2Byte(IL2CPP::Array<uint8_t>* b, int32_t offset);
		static IL2CPP::Array<uint8_t>* Byte2Hex(uint8_t b, IL2CPP::Array<uint8_t>* hexChars);
		static IL2CPP::Array<uint8_t>* DataEncode(IL2CPP::Array<uint8_t>* toEncode);
		static mscorlib::System::String* QPEncode(mscorlib::System::String* toEncode, mscorlib::System::Text::Encoding* e);
		static IL2CPP::Array<uint8_t>* Encode(IL2CPP::Array<uint8_t>* input, uint8_t escapeChar, IL2CPP::Array<uint8_t>* space, IL2CPP::Array<uint8_t>* forbidden, bool uppercase);
		static bool ByteArrayContains(IL2CPP::Array<uint8_t>* array, uint8_t b);
		static IL2CPP::Array<uint8_t>* URLDecode(IL2CPP::Array<uint8_t>* toEncode);
		static bool ByteSubArrayEquals(IL2CPP::Array<uint8_t>* array, int32_t index, IL2CPP::Array<uint8_t>* comperand);
		static IL2CPP::Array<uint8_t>* Decode(IL2CPP::Array<uint8_t>* input, uint8_t escapeChar, IL2CPP::Array<uint8_t>* space);
		static bool SevenBitClean(mscorlib::System::String* s, mscorlib::System::Text::Encoding* e);
		static bool SevenBitClean(IL2CPP::Array<uint8_t>* input);
		static void _cctor();
	};
}

