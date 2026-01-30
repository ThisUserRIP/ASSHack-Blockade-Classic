#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp { struct vp_Component; };
namespace Assembly_CSharp { struct vp_State; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp
{
	struct vp_StateManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_Component* m_Component;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_State>* m_States;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int32>* m_StateIds;
		int32_t m_DefaultId;
		int32_t m_TargetId;
		struct StaticFields
		{
			mscorlib::System::String* m_AppNotPlayingMessage;
			mscorlib::System::String* m_DefaultStateNoDisableMessage;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::vp_Component* component, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_State>* states);
		void ImposeBlockingList(Assembly_CSharp::vp_State* blocker);
		void RelaxBlockingList(Assembly_CSharp::vp_State* blocker);
		void SetState(mscorlib::System::String* state, bool setEnabled);
		void Reset();
		void CombineStates();
		bool IsEnabled(mscorlib::System::String* state);
		static bool AppPlaying();
		static void _cctor();
	};
}

