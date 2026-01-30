#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Internal
{
	struct UIViewCategoryName : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Category;
		bool InstantAction;
		mscorlib::System::String* Name;
		struct StaticFields
		{
			mscorlib::System::String* DEFAULT_CATEGORY;
			mscorlib::System::String* DEFAULT_NAME;
			bool DEFAULT_INSTANT_ACTION;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::String* viewCategory, mscorlib::System::String* viewName);
		void _ctor(mscorlib::System::String* viewCategory, mscorlib::System::String* viewName, bool instantAction);
		Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName* Copy();
		void Reset();
	};
}

