#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace System::System::ComponentModel { struct ISite; };
namespace System::System::ComponentModel { struct EventHandlerList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct EventHandler; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::ComponentModel { struct IContainer; };
namespace mscorlib::System { struct String; };

namespace System::System::ComponentModel
{
	struct MarshalByValueComponent : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::ISite* site;
		System::ComponentModel::EventHandlerList* events;
		struct StaticFields
		{
			mscorlib::System::Object* EventDisposed;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Finalize();
		void add_Disposed(mscorlib::System::EventHandler* value);
		void remove_Disposed(mscorlib::System::EventHandler* value);
		System::ComponentModel::EventHandlerList* get_Events();
		System::ComponentModel::ISite* get_Site();
		void set_Site(System::ComponentModel::ISite* value);
		void Dispose();
		void Dispose(bool disposing);
		System::ComponentModel::IContainer* get_Container();
		mscorlib::System::Object* GetService(mscorlib::System::Type* service);
		bool get_DesignMode();
		mscorlib::System::String* ToString();
		static void _cctor();
	};
}

