#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Utils
{
	struct SafeDelegate : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Action_1<mscorlib::System::Exception>* lgKWKFPtRpeXlDEFduDOCiUYCMq;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_Count();
		void RemoveDelegateOrAllDelegatesFromAnObject(mscorlib::System::Object* obj);
		mscorlib::System::Action_1<mscorlib::System::Exception>* get_ExceptionHandler();
		void set_ExceptionHandler(mscorlib::System::Action_1<mscorlib::System::Exception>* value);
		void Clear();
		mscorlib::System::Object* Clone();
		static mscorlib::System::Action_1<mscorlib::System::Exception>* get_S_ExceptionHandler();
		static void set_S_ExceptionHandler(mscorlib::System::Action_1<mscorlib::System::Exception>* value);
		void _ctor();
	};
}

