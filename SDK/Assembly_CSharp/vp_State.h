#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp { struct vp_StateManager; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct TextAsset; };
namespace Assembly_CSharp { struct vp_ComponentPreset; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_State : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_StateManager* StateManager;
		mscorlib::System::String* TypeName;
		mscorlib::System::String* Name;
		UnityEngine_CoreModule::UnityEngine::TextAsset* TextAsset;
		Assembly_CSharp::vp_ComponentPreset* Preset;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* StatesToBlock;
		bool m_Enabled;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_State>* m_CurrentlyBlockedBy;
		void _ctor(mscorlib::System::String* typeName, mscorlib::System::String* name, mscorlib::System::String* path, UnityEngine_CoreModule::UnityEngine::TextAsset* asset);
		bool get_Enabled();
		void set_Enabled(bool value);
		bool get_Blocked();
		int32_t get_BlockCount();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_State>* get_CurrentlyBlockedBy();
		void AddBlocker(Assembly_CSharp::vp_State* blocker);
		void RemoveBlocker(Assembly_CSharp::vp_State* blocker);
	};
}

