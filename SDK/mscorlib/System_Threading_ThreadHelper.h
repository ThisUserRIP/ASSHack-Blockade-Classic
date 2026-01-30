#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Delegate; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading { struct ExecutionContext; };
namespace mscorlib::System::Threading { struct ContextCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading
{
	struct ThreadHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Delegate* _start;
		mscorlib::System::Object* _startArg;
		mscorlib::System::Threading::ExecutionContext* _executionContext;
		struct StaticFields
		{
			mscorlib::System::Threading::ContextCallback* _ccb;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor(mscorlib::System::Delegate* start);
		void SetExecutionContextHelper(mscorlib::System::Threading::ExecutionContext* ec);
		static void ThreadStart_Context(mscorlib::System::Object* state);
		void ThreadStart(mscorlib::System::Object* obj);
		void ThreadStart();
	};
}

