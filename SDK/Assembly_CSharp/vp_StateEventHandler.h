#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "vp_EventHandler.h"
namespace Assembly_CSharp { struct vp_Component; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp { struct vp_Activity; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp
{
	struct vp_StateEventHandler : Assembly_CSharp::vp_EventHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_Component>* m_StateTargets;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_Activity>* m_Activities;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Transform>* alreadyRecursedTargets;
		void Awake();
		void BindStateToActivity(Assembly_CSharp::vp_Activity* a);
		void BindStateToActivityOnStart(Assembly_CSharp::vp_Activity* a);
		void BindStateToActivityOnStop(Assembly_CSharp::vp_Activity* a);
		void StoreStateTargets();
		void StoreActivities();
		void RefreshActivityStates();
		void ResetActivityStates();
		void SetState(mscorlib::System::String* state, bool setActive, bool recursive, bool includeDisabled);
		bool ActivityInitialized(Assembly_CSharp::vp_Activity* a);
		void _ctor();
	};
}

