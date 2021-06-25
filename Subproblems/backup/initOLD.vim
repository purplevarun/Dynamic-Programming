" plugins
call plug#begin('~/.vim/plugged')
Plug 'octol/vim-cpp-enhanced-highlight'
Plug 'pangloss/vim-javascript'
Plug 'vim-airline/vim-airline'
Plug 'mattn/emmet-vim'
call plug#end()

" Remap a few keys for Windows behavior
source $VIMRUNTIME/mswin.vim

" my settings
cd ~\Desktop
syntax on
set clipboard=unnamed
set number
set autochdir
set nobackup
set noundofile
set noswapfile
set tabstop=4
set shiftwidth=4
set splitright
set splitbelow
set smartindent
set guioptions=m
set scrolloff=2
imap <Home> <Esc><S-I>
imap <End> <Esc><S-A>
