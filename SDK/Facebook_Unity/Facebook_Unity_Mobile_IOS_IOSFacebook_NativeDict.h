#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facebook_Unity_Mobile_IOS_IOSFacebook.h"
namespace Facebook_Unity::Facebook::Unity::Mobile::IOS { struct IOSFacebook; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facebook_Unity::Facebook::Unity::Mobile::IOS
{
	struct IOSFacebook_NativeDict : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _NumEntries_k__BackingField;
		IL2CPP::Array<mscorlib::System::String*>* _Keys_k__BackingField;
		IL2CPP::Array<mscorlib::System::String*>* _Values_k__BackingField;
		void _ctor();
		int32_t get_NumEntries();
		void set_NumEntries(int32_t value);
		IL2CPP::Array<mscorlib::System::String*>* get_Keys();
		void set_Keys(IL2CPP::Array<mscorlib::System::String*>* value);
		IL2CPP::Array<mscorlib::System::String*>* get_Values();
		void set_Values(IL2CPP::Array<mscorlib::System::String*>* value);
	};
}

