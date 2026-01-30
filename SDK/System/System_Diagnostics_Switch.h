#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct WeakReference; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Diagnostics
{
	struct Switch : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* description;
		mscorlib::System::String* displayName;
		mscorlib::System::String* switchValueString;
		mscorlib::System::String* defaultValue;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<mscorlib::System::WeakReference>* switches;
			int32_t s_LastCollectionCount;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* displayName, mscorlib::System::String* description);
		void _ctor(mscorlib::System::String* displayName, mscorlib::System::String* description, mscorlib::System::String* defaultSwitchValue);
		static void _pruneCachedSwitches();
		static void _cctor();
	};
}

