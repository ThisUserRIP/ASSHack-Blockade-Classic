#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
#include "PlatformSupport_Collections_Specialized_NotifyCollectionChangedAction.h"
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::PlatformSupport::Collections::Specialized
{
	struct NotifyCollectionChangedEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction _action;
		mscorlib::System::Collections::IList* _newItems;
		mscorlib::System::Collections::IList* _oldItems;
		int32_t _newStartingIndex;
		int32_t _oldStartingIndex;
		void _ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action);
		void _ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Object* changedItem);
		void _ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Object* changedItem, int32_t index);
		void _ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* changedItems);
		void _ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* changedItems, int32_t startingIndex);
		void _ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Object* newItem, mscorlib::System::Object* oldItem);
		void _ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Object* newItem, mscorlib::System::Object* oldItem, int32_t index);
		void _ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* newItems, mscorlib::System::Collections::IList* oldItems);
		void _ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* newItems, mscorlib::System::Collections::IList* oldItems, int32_t startingIndex);
		void _ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Object* changedItem, int32_t index, int32_t oldIndex);
		void _ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* changedItems, int32_t index, int32_t oldIndex);
		void _ctor(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* newItems, mscorlib::System::Collections::IList* oldItems, int32_t newIndex, int32_t oldIndex);
		void InitializeAddOrRemove(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* changedItems, int32_t startingIndex);
		void InitializeAdd(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* newItems, int32_t newStartingIndex);
		void InitializeRemove(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* oldItems, int32_t oldStartingIndex);
		void InitializeMoveOrReplace(Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction action, mscorlib::System::Collections::IList* newItems, mscorlib::System::Collections::IList* oldItems, int32_t startingIndex, int32_t oldStartingIndex);
		Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction get_Action();
		mscorlib::System::Collections::IList* get_NewItems();
		mscorlib::System::Collections::IList* get_OldItems();
		int32_t get_NewStartingIndex();
		int32_t get_OldStartingIndex();
	};
}

