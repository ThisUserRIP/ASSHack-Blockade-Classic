#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Diagnostics_Tracing_EtwSession.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EtwSession; };
namespace mscorlib::System { template <typename T> struct WeakReference_1; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EtwSession___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Diagnostics::Tracing::EtwSession___c* __9;
			mscorlib::System::Predicate_1<mscorlib::System::WeakReference_1<mscorlib::System::Diagnostics::Tracing::EtwSession>>* __9__2_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _TrimGlobalList_b__2_0(mscorlib::System::WeakReference_1<mscorlib::System::Diagnostics::Tracing::EtwSession>* wrEtwSession);
	};
}

