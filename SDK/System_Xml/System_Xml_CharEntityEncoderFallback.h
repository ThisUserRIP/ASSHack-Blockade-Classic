#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Text_EncoderFallback.h"
namespace System_Xml::System::Xml { struct CharEntityEncoderFallbackBuffer; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct EncoderFallbackBuffer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml
{
	struct CharEntityEncoderFallback : mscorlib::System::Text::EncoderFallback
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::CharEntityEncoderFallbackBuffer* fallbackBuffer;
		IL2CPP::Array<int32_t>* textContentMarks;
		int32_t endMarkPos;
		int32_t curMarkPos;
		int32_t startOffset;
		void _ctor();
		mscorlib::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
		int32_t get_MaxCharCount();
		void set_StartOffset(int32_t value);
		void Reset(IL2CPP::Array<int32_t>* textContentMarks, int32_t endMarkPos);
		bool CanReplaceAt(int32_t index);
	};
}

