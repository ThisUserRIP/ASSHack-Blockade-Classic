#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Text { struct DecoderFallbackBuffer; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Text
{
	struct DecoderFallback : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool bIsMicrosoftBestFitFallback;
		struct StaticFields
		{
			mscorlib::System::Text::DecoderFallback* replacementFallback;
			mscorlib::System::Text::DecoderFallback* exceptionFallback;
			mscorlib::System::Object* s_InternalSyncObject;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Object* get_InternalSyncObject();
		static mscorlib::System::Text::DecoderFallback* get_ReplacementFallback();
		static mscorlib::System::Text::DecoderFallback* get_ExceptionFallback();
		mscorlib::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();
		int32_t get_MaxCharCount();
		void _ctor();
	};
}

