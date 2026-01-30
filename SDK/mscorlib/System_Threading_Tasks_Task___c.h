#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_Tasks_Task.h"
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System::Threading { struct TimerCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading::Tasks { struct Task_ContingentProperties; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Threading::Tasks
{
	struct Task___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Threading::Tasks::Task___c* __9;
			mscorlib::System::Action_1<mscorlib::System::Object>* __9__276_0;
			mscorlib::System::Threading::TimerCallback* __9__276_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _Delay_b__276_0(mscorlib::System::Object* state);
		void _Delay_b__276_1(mscorlib::System::Object* state);
		mscorlib::System::Threading::Tasks::Task_ContingentProperties* __cctor_b__295_0();
		bool __cctor_b__295_1(mscorlib::System::Threading::Tasks::Task* t);
		bool __cctor_b__295_2(mscorlib::System::Object* tc);
	};
}

