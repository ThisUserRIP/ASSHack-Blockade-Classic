#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facebook_Unity_Settings_FacebookSettings.h"
namespace Facebook_Unity_Settings::Facebook::Unity::Settings { struct FacebookSettings; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facebook_Unity_Settings::Facebook::Unity::Settings
{
	struct FacebookSettings_UrlSchemes : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* list;
		void _ctor(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* schemes);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* get_Schemes();
		void set_Schemes(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* value);
	};
}

