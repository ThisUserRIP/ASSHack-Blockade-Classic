#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct FaceInfo_Legacy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Name;
		float PointSize;
		float Scale;
		int32_t CharacterCount;
		float LineHeight;
		float Baseline;
		float Ascender;
		float CapHeight;
		float Descender;
		float CenterLine;
		float SuperscriptOffset;
		float SubscriptOffset;
		float SubSize;
		float Underline;
		float UnderlineThickness;
		float strikethrough;
		float strikethroughThickness;
		float TabWidth;
		float Padding;
		float AtlasWidth;
		float AtlasHeight;
		void _ctor();
	};
}

