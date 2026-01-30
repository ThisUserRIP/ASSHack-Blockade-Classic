#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::Serialization
{
	struct ObjectIDGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_currentCount;
		int32_t m_currentSize;
		IL2CPP::Array<int64_t>* m_ids;
		IL2CPP::Array<mscorlib::System::Object*>* m_objs;
		struct StaticFields
		{
			IL2CPP::Array<int32_t>* sizes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		int32_t FindElement(mscorlib::System::Object* obj, bool& found);
		int64_t GetId(mscorlib::System::Object* obj, bool& firstTime);
		int64_t HasId(mscorlib::System::Object* obj, bool& firstTime);
		void Rehash();
		static void _cctor();
	};
}

