#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct Encoding; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace I18N::I18N::Common
{
	struct Manager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* handlers;
		mscorlib::System::Collections::Hashtable* active;
		mscorlib::System::Collections::Hashtable* assemblies;
		struct StaticFields
		{
			mscorlib::System::String* hex;
			I18N::Common::Manager* manager;
			mscorlib::System::Object* lockobj;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void _cctor();
		static I18N::Common::Manager* get_PrimaryManager();
		static mscorlib::System::String* Normalize(mscorlib::System::String* name);
		mscorlib::System::Text::Encoding* GetEncoding(int32_t codePage);
		mscorlib::System::Text::Encoding* GetEncoding(mscorlib::System::String* name);
		mscorlib::System::Globalization::CultureInfo* GetCulture(int32_t culture, bool useUserOverride);
		mscorlib::System::Globalization::CultureInfo* GetCulture(mscorlib::System::String* name, bool useUserOverride);
		mscorlib::System::Object* Instantiate(mscorlib::System::String* name);
		void LoadClassList();
		void LoadInternalClasses();
	};
}

