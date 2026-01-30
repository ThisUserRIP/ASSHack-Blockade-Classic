#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Runtime_InteropServices_GCHandle.h"
namespace mscorlib::System::Runtime::InteropServices { struct GCHandle; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System
{
	struct WeakReference : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isLongReference;
		mscorlib::System::Runtime::InteropServices::GCHandle gcHandle;
		void AllocateHandle(mscorlib::System::Object* target);
		void _ctor();
		void _ctor(mscorlib::System::Object* target);
		void _ctor(mscorlib::System::Object* target, bool trackResurrection);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		bool get_IsAlive();
		mscorlib::System::Object* get_Target();
		void set_Target(mscorlib::System::Object* value);
		bool get_TrackResurrection();
		void Finalize();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
	};
}

