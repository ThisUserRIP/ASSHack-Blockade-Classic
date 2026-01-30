#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIPopupContentData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Events::UnityAction>* ButtonCallbacks;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* ButtonLabels;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* ButtonNames;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Labels;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Sprite>* Sprites;
		void _ctor();
	};
}

