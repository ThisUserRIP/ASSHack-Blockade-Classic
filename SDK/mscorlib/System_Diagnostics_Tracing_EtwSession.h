#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Diagnostics::Tracing { struct ActivityFilter; };
namespace mscorlib::System { template <typename T> struct WeakReference_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EtwSession : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_etwSessionId;
		mscorlib::System::Diagnostics::Tracing::ActivityFilter* m_activityFilter;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<mscorlib::System::WeakReference_1<mscorlib::System::Diagnostics::Tracing::EtwSession>>* s_etwSessions;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Diagnostics::Tracing::EtwSession* GetEtwSession(int32_t etwSessionId, bool bCreateIfNeeded);
		static void RemoveEtwSession(mscorlib::System::Diagnostics::Tracing::EtwSession* etwSession);
		static void TrimGlobalList();
		void _ctor(int32_t etwSessionId);
		static void _cctor();
	};
}

