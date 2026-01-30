#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Text { struct EncoderFallbackBuffer; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Text
{
	struct EncoderFallback : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool bIsMicrosoftBestFitFallback;
		struct StaticFields
		{
			mscorlib::System::Text::EncoderFallback* replacementFallback;
			mscorlib::System::Text::EncoderFallback* exceptionFallback;
			mscorlib::System::Object* s_InternalSyncObject;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Object* get_InternalSyncObject();
		static mscorlib::System::Text::EncoderFallback* get_ReplacementFallback();
		static mscorlib::System::Text::EncoderFallback* get_ExceptionFallback();
		mscorlib::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
		int32_t get_MaxCharCount();
		void _ctor();
	};
}

