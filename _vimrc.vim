source $VIMRUNTIME/mswin.vim
imap <Home> <Esc><S-I>
imap <End> <Esc><S-A>
map <C-B> :!run %<CR><CR>
map <C-G> :!gitter %<CR>
map <C-H> :!pusher %<CR>
map <C-Q> :wq<CR>
map ` :!start cmd<CR>
syntax on
set smartindent
set autoindent
set wrap
set cmdheight=1
set laststatus=2
filetype on
set guifont=consolas:h14:b
set autochdir
cd ~\Desktop
set history=10
set guioptions=
set noswapfile
set noundofile
set nobackup
set number
set tabstop=4 shiftwidth=4
set splitright
set splitbelow
call plug#begin('~/.vim/plugged')
Plug 'tpope/vim-commentary'
Plug 'vim-airline/vim-airline'
Plug 'pangloss/vim-javascript'
Plug 'octol/vim-cpp-enhanced-highlight'
Plug 'jorengarenar/minisnip'
call plug#end()
