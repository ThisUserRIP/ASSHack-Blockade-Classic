#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_MemberInfo.h"
namespace mscorlib::System::Reflection { struct EventInfo_AddEventAdapter; };
#include "System_Reflection_MemberTypes.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "Mono_RuntimeEventHandle.h"
namespace mscorlib::Mono { struct RuntimeEventHandle; };
#include "System_RuntimeTypeHandle.h"
namespace mscorlib::System { struct RuntimeTypeHandle; };

namespace mscorlib::System::Reflection
{
	struct EventInfo : mscorlib::System::Reflection::MemberInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::EventInfo_AddEventAdapter* cached_add_event;
		mscorlib::System::Type* get_EventHandlerType();
		mscorlib::System::Reflection::MemberTypes get_MemberType();
		void _ctor();
		mscorlib::System::Reflection::MethodInfo* GetAddMethod();
		mscorlib::System::Reflection::MethodInfo* GetAddMethod(bool nonPublic);
		mscorlib::System::Reflection::MethodInfo* GetRaiseMethod(bool nonPublic);
		mscorlib::System::Reflection::MethodInfo* GetRemoveMethod();
		mscorlib::System::Reflection::MethodInfo* GetRemoveMethod(bool nonPublic);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static bool op_Equality(mscorlib::System::Reflection::EventInfo* left, mscorlib::System::Reflection::EventInfo* right);
		static bool op_Inequality(mscorlib::System::Reflection::EventInfo* left, mscorlib::System::Reflection::EventInfo* right);
		static mscorlib::System::Reflection::EventInfo* internal_from_handle_type(intptr_t event_handle, intptr_t type_handle);
		static mscorlib::System::Reflection::EventInfo* GetEventFromHandle(mscorlib::Mono::RuntimeEventHandle handle, mscorlib::System::RuntimeTypeHandle reflectedType);
	};
	bool operator==(mscorlib::System::Reflection::EventInfo& left, mscorlib::System::Reflection::EventInfo& right);
	bool operator!=(mscorlib::System::Reflection::EventInfo& left, mscorlib::System::Reflection::EventInfo& right);
}

