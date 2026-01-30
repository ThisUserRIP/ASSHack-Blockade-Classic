#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_IncrementalReadDecoder.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct BinHexDecoder : System_Xml::System::Xml::IncrementalReadDecoder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* buffer;
		int32_t curIndex;
		int32_t endIndex;
		bool hasHalfByteCached;
		uint8_t cachedHalfByte;
		bool get_IsFull();
		int32_t Decode(IL2CPP::Array<wchar_t>* chars, int32_t startPos, int32_t len);
		static IL2CPP::Array<uint8_t>* Decode(IL2CPP::Array<wchar_t>* chars, bool allowOddChars);
		static void Decode(wchar_t* pChars, wchar_t* pCharsEndPos, uint8_t* pBytes, uint8_t* pBytesEndPos, bool& hasHalfByteCached, uint8_t& cachedHalfByte, int32_t& charsDecoded, int32_t& bytesDecoded);
	};
}

