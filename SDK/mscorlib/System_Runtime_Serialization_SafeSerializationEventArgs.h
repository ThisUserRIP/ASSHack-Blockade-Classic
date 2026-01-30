#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_EventArgs.h"
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace mscorlib::System::Runtime::Serialization
{
	struct SafeSerializationEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Serialization::StreamingContext m_streamingContext;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>* m_serializedStates;
		void _ctor(mscorlib::System::Runtime::Serialization::StreamingContext streamingContext);
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Object>* get_SerializedStates();
	};
}

