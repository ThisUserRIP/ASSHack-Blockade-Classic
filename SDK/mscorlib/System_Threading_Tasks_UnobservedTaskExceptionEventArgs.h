#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_EventArgs.h"
namespace mscorlib::System { struct AggregateException; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading::Tasks
{
	struct UnobservedTaskExceptionEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::AggregateException* m_exception;
		bool m_observed;
		void _ctor(mscorlib::System::AggregateException* exception);
	};
}

