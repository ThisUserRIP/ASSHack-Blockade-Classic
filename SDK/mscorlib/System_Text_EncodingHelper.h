#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct Assembly; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Text
{
	struct EncodingHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Text::Encoding* utf8EncodingWithoutMarkers;
			mscorlib::System::Object* lockobj;
			mscorlib::System::Reflection::Assembly* i18nAssembly;
			bool i18nDisabled;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Text::Encoding* get_UTF8Unmarked();
		static mscorlib::System::String* InternalCodePage(int32_t& code_page);
		static mscorlib::System::Text::Encoding* GetDefaultEncoding();
		static mscorlib::System::Object* InvokeI18N(mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Object*>* args);
		static void _cctor();
	};
}

