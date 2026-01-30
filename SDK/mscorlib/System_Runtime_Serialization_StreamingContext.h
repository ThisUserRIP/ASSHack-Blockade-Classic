#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
#include "System_Runtime_Serialization_StreamingContextStates.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Runtime::Serialization
{
	struct StreamingContext
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* m_additionalContext;
		mscorlib::System::Runtime::Serialization::StreamingContextStates m_state;
		void _ctor(mscorlib::System::Runtime::Serialization::StreamingContextStates state);
		void _ctor(mscorlib::System::Runtime::Serialization::StreamingContextStates state, mscorlib::System::Object* additional);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::Runtime::Serialization::StreamingContextStates get_State();
	};
}

